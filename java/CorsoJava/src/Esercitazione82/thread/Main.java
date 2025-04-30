package thread;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        ProvaThread ilrunner = new ProvaThread();
        Thread ilThread = new Thread(ilrunner);
        ilThread.setDaemon(true);
        ilThread.start();

        System.out.println("Hai 15 secondi per scrivere il tuo nome!");
        System.out.println("Inserisci il tuo nome: ");
        String name = scanner.nextLine();
        System.out.println("Ciao " + name);

        scanner.close();
    }
}
