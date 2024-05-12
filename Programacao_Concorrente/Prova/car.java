class Car {
    private static int count = 0;
    private int id;
    private String color;
    private String type;
    private int productionStationId;
    private int employeeId;
    private int position;

    public Car(String color, String type, int productionStationId, int employeeId, int position) {
        this.id = ++count;
        this.color = color;
        this.type = type;
        this.productionStationId = productionStationId;
        this.employeeId = employeeId;
        this.position = position;
    }

    // Getters
    // Implement setters if needed
}
