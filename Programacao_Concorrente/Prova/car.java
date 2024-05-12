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

    public int getId() {
        return id;
    }

    public String getColor() {
        return color;
    }

    public String getType() {
        return type;
    }

    public int getProductionStationId() {
        return productionStationId;
    }

    public int getEmployeeId() {
        return employeeId;
    }

    public int getPosition() {
        return position;
    }
}
