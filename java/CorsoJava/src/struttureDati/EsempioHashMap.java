import java.util.HashMap;
import java.util.Map;

public class EsempioHashMap {
    public static void main(String[] args) {
        // Creazione di una HashMap che associa nomi a età
        HashMap<String, Integer> eta = new HashMap<>();

        // Inserimento di coppie chiave-valore
        eta.put("Marco", 25);
        eta.put("Laura", 30);
        eta.put("Giovanni", 22);

        // Accesso a un valore tramite chiave
        System.out.println("Età di Laura: " + eta.get("Laura"));

        // Verifica se una chiave esiste
        if (eta.containsKey("Antonio")) {
            System.out.println("Antonio è presente");
        } else {
            System.out.println("Antonio non è presente");
        }

        // Iterazione sulle entry della mappa
        for (Map.Entry<String, Integer> entry : eta.entrySet()) {
            System.out.println(entry.getKey() + ": " + entry.getValue());
        }

        // Rimozione di una entry
        eta.remove("Giovanni");

        // Dimensione della mappa (spostato qui per essere eseguito dopo le operazioni)
        System.out.println("Numero di persone: " + eta.size());
    }
}
