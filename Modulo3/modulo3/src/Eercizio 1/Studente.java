package esercizio1;

public class Studente {

    private String nome;
    private int matricola;
    private float voto;

    public Studente(String nome, int matricola, float voto){

        this.nome = nome;
        this.matricola = matricola;
        this.voto = voto;

        }
    public void mediaVoti(float a , float b,float c){

        float mediaVoto;

        mediaVoto =  (a+b+c)/3;
        System.out.println("La media dei voti inseriti è : " + mediaVoto);

    }
}
