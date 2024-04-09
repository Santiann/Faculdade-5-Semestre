public class Buffer {
    private int[] buffer;
    private int capacity;
    private int size;
    private int front;
    private int rear;

    public Buffer(int capacity) {
        this.capacity = capacity;
        this.size = 0;
        this.buffer = new int[capacity];
        this.front = 0;
        this.rear = -1;
    }

    public synchronized void produce(int value) throws InterruptedException {
        while (size == capacity) {
            wait();
        }

        rear = (rear + 1) % capacity;
        buffer[rear] = value;
        size++;
        notifyAll();
    }

    public synchronized int consume() throws InterruptedException {
        while (size == 0) {
            wait();
        }

        int value = buffer[front];
        front = (front + 1) % capacity;
        size--;
        notifyAll();
        return value;
    }
}
