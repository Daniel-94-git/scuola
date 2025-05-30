package Esercitazione62.iterator.classiEsottoclassi.Biciclette;

public class SubMountineBike extends Bici {

    private String gomme;
    private String freni;

    public SubMountineBike(int peso, int marce, boolean luci, String gomme,String freni) {
        super(peso, marce, luci);
        this.gomme = gomme;
        this.freni = freni;
    }


    public String getGomme() {
        return gomme;
    }

    public void setGomme(String gomme) {
        this.gomme = gomme;
    }

    public String getFreni() {
        return freni;
    }

    public void setFreni(String freni) {
        this.freni = freni;
    }

    @Override
    public String toString() {
        return "SubMountineBike{" +
                "gomme='" + gomme + '\'' +
                ", freni='" + freni + '\'' +
                '}';
    }
}
