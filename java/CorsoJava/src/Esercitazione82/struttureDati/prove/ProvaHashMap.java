package struttureDati.prove;

import java.util.HashMap;
import java.util.Map;

public class ProvaHashMap {
    public static void main(String[] args) {

        HashMap <String,Integer> lista = new HashMap<>();

        lista.put("Ciccio",30);
        lista.put("Caio",27);
        lista.put("Sempronio",18);

        // accesso a valore tramite chiave
        System.out.println(lista.get("Ciccio"));

        // verifico se esiste valore
        if(lista.containsKey("Caio")){
            System.out.println("Caio è presente");
        }
        else {

            System.out.println("Caio non è presente");
        }

        // itero contenuti map
        for(Map.Entry <String,Integer> entry : lista.entrySet())
        {
            System.out.println(entry.getKey() + ": " + entry.getValue());
        }

        // rimozione valore

        lista.remove("Ciccio",25);

        //dimensione HashMap

        System.out.println("Dimensione HM : " + lista.size());



    }
}
