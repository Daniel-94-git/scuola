package struttureDati.prove;

import java.util.Stack;

public class ProvaStack {
    public static void main(String[] args) {


        Stack <Integer> prova = new Stack<>();

        // aggiungo
        prova.push(20);
        prova.push(50);
        prova.push(70);

        // guardo ultimo
        System.out.println("Ultimo Inserito : " + prova.peek());

        // elimino ultimo
        System.out.println("Elimino ultimo elemento: " + prova.pop());

        // grandezza
        System.out.println("Dimensione stack : " + prova.size());

        // vuoto
        System.out.println("E' vuoto : " + prova.empty());



    }

}
