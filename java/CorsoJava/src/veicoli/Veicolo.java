package veicoli;

public class Veicolo {

    private int anno;
    private int kilometri;
    private boolean benzina;
    private float velocita;

    public Veicolo(int anno,int kilometri,float velocita){

        this.anno = anno;
        this.kilometri = kilometri;
        this.velocita = velocita;
        this.benzina = true;

    }

    protected void descrizione(){

        System.out.println("Anno: " + this.anno + "Benzina : " + this.benzina + "kilometri : " + this.kilometri);
    }

    protected float accellera(float quantità){

        if ((this.velocita - quantità) >= 0) {

            this.velocita = this.velocita + quantità;
            System.out.println("La velocità al momento : " + this.velocita);
        }
        else {

            System.out.println("Cosi vai in retro");

        }


        return  this.velocita;
    }

    @Override
    public String toString() {
        return "Veicolo{" +
                "anno=" + anno +
                ", kilometri=" + kilometri +
                ", benzina=" + benzina +
                '}';
    }
}
