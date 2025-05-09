package Esercitazione52.Esercitazione2_SottoClassi.Esercitazione3_Animalee_SottoClasse;

class Cane extends Animale {

    private int numeroGiochi;
    private boolean fedele;

    public Cane(float peso, int numeroZampe, boolean coda, boolean bipede, int numeroGiochi, boolean fedele) {

        super(peso,numeroZampe,coda,bipede);
        this.numeroGiochi = numeroGiochi;
        this.fedele = fedele;

    }

    public boolean quadrupede(){
        nonEretto();
        return this.bipede;
    }

    protected boolean isFedele(){
        System.out.println("Il cane ti è fedele.");
        this.fedele=true;

        return this.fedele;
    }

    protected float cammina(int passi){

        System.out.println("Ha camminato per : " + passi + " passi");
        this.peso = this.peso - (passi/50);
        return this.peso;
    }

    protected int regaloGiocattolo(int nuoviGiochi){

        System.out.println("Il cane è felice coi suoi giocattoli.");
        this.numeroGiochi = numeroGiochi + nuoviGiochi;
        return this.numeroGiochi;
    }

    protected void stampaDettagli(){

        super.stampaDettagli();
        System.out.println("giocattoli: " + numeroGiochi + " ,è fedele: " + fedele);


    }

}
