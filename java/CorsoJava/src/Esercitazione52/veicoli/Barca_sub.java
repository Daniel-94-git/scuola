package Esercitazione52.Esercitazione2_SottoClassi.veicoli;

class Barca_sub extends Veicolo {

    private int vele;


    public Barca_sub(int anno, int kilometri,float velocita,int vele) {
        super(anno, kilometri,velocita);
        this.vele = vele;
    }

    @Override
    protected float accellera(float quantità) {
        return super.accellera(quantità);
    }



    @Override
    protected void descrizione() {
        
        System.out.println("Numero vele: " + this.vele );
    }
}
