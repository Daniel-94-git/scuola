package Esercitazione82.Smistamento;

import java.lang.reflect.Array;
import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        // Struttura per interi Arraylist
        ArrayList<Integer> listaA = new ArrayList<>();

        // Struttura per Stringhe LinkedList
        LinkedList<String> listaL = new LinkedList<>();

        // Struttura per float Stack
        Stack<Float> listaS = new Stack<>();

        // Struttura per bool queue
        Queue<Boolean> listaQ = new LinkedList<>();

        for (int i = 0; i <= 10; i++) {

            System.out.println("Inserisci un valore fra int/float/string/bool : ");
            if (scanner.hasNextInt()) {
                int numero = scanner.nextInt();
                listaA.add(numero);
            } else if (scanner.hasNextFloat()) {
                float numero = scanner.nextFloat();
                listaS.add(numero);
            } else if (scanner.hasNextBoolean()) {
                boolean boll = scanner.hasNextBoolean();
                listaQ.add(boll);
            } else if (scanner.hasNext()) {
                String parola = scanner.next();
                listaL.add(parola);
            }

        }
        System.out.println("Lista int : " + listaA);
        System.out.println("Lista float : " + listaS);
        System.out.println("Lista String : " + listaL);
        System.out.println("Lista bool : " + listaQ);
    }
}
