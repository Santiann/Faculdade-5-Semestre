import java.util.ArrayList;
import java.util.List;

class Factory {
    private static final int NUM_PRODUCTION_STATIONS = 4;
    private static final int NUM_EMPLOYEES_PER_STATION = 5;
    private static final int CAR_BUFFER_SIZE = 40;

    private List<ProductionStation> productionStations;

    public Factory() {
        this.productionStations = new ArrayList<>();
        for (int i = 0; i < NUM_PRODUCTION_STATIONS; i++) {
            productionStations.add(new ProductionStation(i, NUM_EMPLOYEES_PER_STATION, CAR_BUFFER_SIZE));
        }
    }

    public void startProduction() {
        while (true) {
            for (ProductionStation station : productionStations) {
                station.produceCar();
            }
            // Add some delay between production cycles
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}