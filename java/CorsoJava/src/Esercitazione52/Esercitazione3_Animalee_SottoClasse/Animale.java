package Esercitazione52.Esercitazione2_SottoClassi.Esercitazione3_Animalee_SottoClasse;

public class Animale {

    protected float peso;
    protected int numeroZampe;
    protected boolean coda;
    protected boolean bipede;

    public Animale(float peso, int numeroZampe, boolean coda, boolean bipede){
        this.peso = peso;
        this.numeroZampe = numeroZampe;
        this.coda = coda;
        this.bipede = bipede;
    }

    protected float eat_Food(float grammiCibo){

        System.out.println("L'animale sta mangiando!");
        this.peso = this.peso+ (grammiCibo/1000);

        return this.peso;
    }

    protected boolean nonEretto(){

        System.out.println("L'animale non è su due zampe!");
        this.bipede = false;
        return  this.bipede;
    }

    protected boolean scodinzola(){

        System.out.println("L'animale ha la coda!");
        this.coda = true;
        return  this.coda;
    }

    protected void stampaDettagli() {
        System.out.println("Peso: " + peso  + " ,numero zampe: " + numeroZampe + " ,coda:  " + coda + " ,bipede: " + bipede );
    }

}
