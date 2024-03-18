import java.util.concurrent.Semaphore;

class ServerClient {
    private Semaphore semaphore;

    public ServerClient(int availableConnections) {
        semaphore = new Semaphore(availableConnections);
    }

    public void makeRequest(int requestId) {
        try {
            semaphore.acquire();

            System.out.println("Request " + requestId + "is being processed with a connection.");
            Thread.sleep(2000);
            System.out.println("Request " + requestId + "processing is complete.");
        } catch (InterruptedException e) {
            e.printStackTrace();
        } finally {
            semaphore.release();
        }
    }

    public static void main(String[] args) {
        final int TOTAL_REQUESTS = 1000;
        final int AVAILABLE_CONNECTIONS = 20;

        ServerClient connectionPool = new ServerClient(AVAILABLE_CONNECTIONS);


        for (int i = 0; i < TOTAL_REQUESTS; i++) {
            final int requestId = i + i;
            Thread requestThread = new Thread(() -> connectionPool.makeRequest(requestId));
            requestThread.start();
        }
    }
}