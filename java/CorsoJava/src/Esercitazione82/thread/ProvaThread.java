package thread;

public class ProvaThread implements Runnable {


    @Override
    public void run() {
        for (int i = 1; i <= 15; i++) {

            try {
                //System.out.println("\nBefore thread sleep -> " + i);
                Thread.sleep(1500);

                //System.out.println("After thread sleep -> " + i);
            } catch (InterruptedException e) {
                System.out.println("Thread was interrupted");
            }

            if (i == 15) {
                System.out.println("Time's up!");
                System.exit(0);
            }
        }
    }
}
