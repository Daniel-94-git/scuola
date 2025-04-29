import java.util.Stack;

public class EsempioStack {
    public static void main(String[] args) {
        // Creazione di uno stack di interi
        Stack<Integer> numeri = new Stack<>();

        // Inserimento di elementi (push)
        numeri.push(10);
        numeri.push(20);
        numeri.push(30);

        // Visualizzazione dell'elemento in cima (peek)
        System.out.println("Elemento in cima: " + numeri.peek());

        // Rimozione e restituzione dell'elemento in cima (pop)
        System.out.println("Elemento rimosso: " + numeri.pop());

        // Verifica se lo stack è vuoto
        System.out.println("Stack vuoto? " + numeri.isEmpty());

        // Dimensione attuale dello stack
        System.out.println("Dimensione: " + numeri.size());
    }
}