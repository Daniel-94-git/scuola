package Esercitazione82.Rubrica;

import java.util.HashMap;
import java.util.Objects;

public class Rubrica {

    private HashMap<String,Integer> Rubrica;

    public Rubrica(HashMap<String, Integer> rubrica) {
        Rubrica = rubrica;
    }

    public void aggiungiContatto(String nome, int numero){
        this.Rubrica.put(nome,numero);
        System.out.println("Aggiunto : " + nome + " : " + numero);
    }
    
    public void cercaContatto(String nome){
        boolean trovato;
        trovato = this.Rubrica.containsKey(nome);
        System.out.println(nome + " : " + trovato);
    }

    public void eliminaContatto(String nome){
        
        this.Rubrica.remove(nome);
        System.out.println("Eliminato : " + nome);
    }

    public HashMap<String, Integer> getRubrica() {
        return Rubrica;
    }

    public void setRubrica(HashMap<String, Integer> rubrica) {
        Rubrica = rubrica;
    }

    @Override
    public boolean equals(Object o) {
        if (o == null || getClass() != o.getClass()) return false;
        Rubrica rubrica = (Rubrica) o;
        return Objects.equals(Rubrica, rubrica.Rubrica);
    }

    @Override
    public int hashCode() {
        return Objects.hashCode(Rubrica);
    }

    @Override
    public String toString() {
        return "Rubrica{" +
                "Rubrica=" + Rubrica +
                '}';
    }
}
