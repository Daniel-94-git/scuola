package Esercitazione52.Esercitazione2_SottoClassi.Lab2_Inf_52;

public class Main {
    public static void main(String[] args) {
        Animale animaleGenerico = new Animale("Ignoto", "sconosciuto", "wow",5);
        Cane fido = new Cane("Fido", "Labrador","cico",3);

        System.out.println("--- Animale Generico ---");
        System.out.println("Nome: " + animaleGenerico.nome);
        System.out.println("Tipo (tramite metodo): " + animaleGenerico.getTipoAnimale());
        // System.out.println("Tipo (accesso diretto - ERRORE): " + animaleGenerico.tipo); // Non accessibile direttamente da fuori
        animaleGenerico.faiVerso();

        System.out.println("\n--- Cane Fido ---");
        System.out.println("Nome: " + fido.nome + fido.soprannome); // Ereditato e public
        System.out.println("Tipo (tramite metodo ereditato): " + fido.getTipoAnimale()); // Ereditato e accessibile tramite metodo public
        fido.faiVerso();
        System.out.println("Razza: " + fido.getRazza());
    }
}