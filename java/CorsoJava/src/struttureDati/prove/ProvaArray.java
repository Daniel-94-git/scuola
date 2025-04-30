package struttureDati.prove;

import java.util.ArrayList;

public class ProvaArray {
    public static void main(String[] args) {

        ArrayList<Integer> lista = new ArrayList<>();

        // aggiungo elementi
        lista.add(12);
        lista.add(15);
        lista.add(20);

        // grandezza array
        System.out.println("Gradenzza array : " + lista.size());

        // visualizzazione array
        System.out.println("Contenuto array : " + lista);

        // rimuovere elemento per valore
        lista.remove("15");
        System.out.println("Contenuto array : " + lista);

        // rimuovere elemento per indice
        lista.remove(1);
        System.out.println("Contenuto array : " + lista);

        // accedere a elemento specifico
        if(!lista.isEmpty()){
            Integer primoNumero = lista.get(0);
            System.out.println("Il primo elemento della lista è : " + primoNumero);
        }



    }
}
