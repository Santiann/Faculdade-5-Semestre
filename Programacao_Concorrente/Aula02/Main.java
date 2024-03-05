package Programacao_Concorrente.Aula02;

public class Main {
    public static void main(String[] args)
    {
        TarefaRunnable thread1 = new TarefaRunnable("#Tarefa 1", 1000);
        TarefaRunnable thread2 = new TarefaRunnable("#Tarefa 2", 1200);
        TarefaRunnable thread3 = new TarefaRunnable("#Tarefa 3", 1500);

        Thread t1 = new Thread(thread1);
        Thread t2 = new Thread(thread2);
        Thread t3 = new Thread(thread3);

        
        t1.start();
        t2.start();
        t3.start();
        
        t1.setPriority(7);
        t2.setPriority(10);
        t3.setPriority(Thread.NORM_PRIORITY);

        try {
            t1.join();
            t2.join(); 
        } catch(InterruptedException e) {
            System.out.println("Paulinho é gay");
        }

        while (t1.isAlive() || t2.isAlive() || t3.isAlive()) {
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

        // int priority1 = t1.getPriority();
        // int priority2 = t2.getPriority();
        // int priority3 = t3.getPriority();

        // System.out.println(priority1);
        // System.out.println(priority2);
        System.out.println("Terminou todas as Threads");
    }
}
