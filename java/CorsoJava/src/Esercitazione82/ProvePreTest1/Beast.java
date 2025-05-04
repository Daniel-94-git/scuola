package Esercitazione82.ProvePreTest1;

public class Beast implements  Runnable {

        static int counter = 0;

        @Override
        public void run() {

            for(int i = 0; i < 10 ;i++){

                try {
                    Thread.sleep(1000);
                    counter++;
                }
                catch (InterruptedException e){
                    System.out.println("Thread interotto");
                }
                if(i == 10){
                    System.out.println("Fine del tempo");
                    System.exit(0);
                }


            }

        }
    }


