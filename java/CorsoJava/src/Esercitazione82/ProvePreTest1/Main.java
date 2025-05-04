package Esercitazione82.ProvePreTest1;

import java.util.Scanner;
import java.util.Stack;

public class Main {

    public static void main(String[] args) {
    /*
        Auto lulu = new Auto("opel","corsa",2020);
        Auto daniel = new Auto("Subaru","imoreza",2005);
        Auto p = new Auto("Fiat","panda",2000);


        Stack <Auto> pippo = new Stack<>();

        pippo.add(lulu);
        pippo.add(daniel);
        pippo.add(p);

        System.out.println(pippo);

        System.out.println("Pippo è vuoto : " + pippo.empty());
        System.out.println("Il primo elemento di pippo "+pippo.peek());
        System.out.println(("Togliamo p dalla lista pippo : " + pippo.pop()));
        System.out.println(pippo);

        for(Auto oggetti : pippo){

            System.out.println("Oggetto : " + oggetti);
        }
    */
        Scanner scanner = new Scanner(System.in);
        Beast ciccio = new Beast();
        Thread thread = new Thread(ciccio);
        thread.setDaemon(true);
        thread.start();

        System.out.println("Scrivi il tuo nome in 10 secondi : ");
        System.out.println("Nome : ");
        String nome = scanner.nextLine();
        System.out.println("Nome: " + nome);
        System.out.println(Beast.counter);
    }

}
