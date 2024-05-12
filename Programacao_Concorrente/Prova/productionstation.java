import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.BlockingQueue;

class ProductionStation {
    private int id;
    private List<Employee> employees;
    private BlockingQueue<Car> carBuffer;

    public ProductionStation(int id, int numEmployees, int bufferSize) {
        this.id = id;
        this.employees = new ArrayList<>();
        this.carBuffer = new ArrayBlockingQueue<>(bufferSize);

        for (int i = 0; i < numEmployees; i++) {
            employees.add(new Employee(i));
        }
    }

    public void produceCar() {
        Random rand = new Random();
        Employee employee = employees.get(rand.nextInt(employees.size()));
        try {
            carBuffer.put(new Car("RGB", "SEDAN", id, employee.getId(), carBuffer.size()));
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}