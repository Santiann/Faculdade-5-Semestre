import java.util.concurrent.ArrayBlockingQueue;
// Nessa clase temos um buffer que é uma fila de tamanho fixo
public class Buffer {
    private ArrayBlockingQueue<Integer> buffer;

    public Buffer(int capacity) {
        buffer = new ArrayBlockingQueue<>(capacity);
    }

    //produtor vai inserir um elemento na fila
    public void produce(int value) throws InterruptedException {
        //put vai inserir na fila
        buffer.put(value);  //se não tiver espaço ele vai esperar e put vai ficar bloqueado
    }

    public int consume () throws InterruptedException {
        return buffer.take(); //se não tiver elementos ele vai esperar
        //quando consumir o metodo take vai tirar o primeiro elemento da fila
    }
}

//Quando estiver cheio, o produtor vai esperar até que o consumidor consuma