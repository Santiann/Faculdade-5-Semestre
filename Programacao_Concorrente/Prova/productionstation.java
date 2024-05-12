import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.BlockingQueue;

class ProductionStation implements Runnable {
    private int id;
    private List<Employee> employees;
    private BlockingQueue<Car> carBuffer;
    private String[] carTypes = { "SEDAN", "SUV" };
    private String[] colors = { "RED", "GREEN", "BLUE" };
    private Random random = new Random();

    public ProductionStation(int id, int numEmployees, int bufferSize) {
        this.id = id;
        this.employees = new ArrayList<>();
        this.carBuffer = new ArrayBlockingQueue<>(bufferSize);

        for (int i = 0; i < numEmployees; i++) {
            employees.add(new Employee(i));
        }
    }

    public void produceCar() {
        Employee employee = employees.get(random.nextInt(employees.size()));
        String type = carTypes[random.nextInt(carTypes.length)];
        String color = colors[random.nextInt(colors.length)];
        Car car = new Car(color, type, id, employee.getId(), carBuffer.size());
        try {
            carBuffer.put(car);
            System.out.println("Car produced - ID: " + car.getId() +
                    ", Color: " + car.getColor() +
                    ", Type: " + car.getType() +
                    ", Produced at Station: " + car.getProductionStationId() +
                    ", Employee ID: " + car.getEmployeeId() +
                    ", Position in Queue: " + car.getPosition());
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    @Override
    public void run() {
        while (true) {
            produceCar();
            // Add some delay between production cycles
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
