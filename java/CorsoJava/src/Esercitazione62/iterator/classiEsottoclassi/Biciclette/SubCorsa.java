package Esercitazione62.iterator.classiEsottoclassi.Biciclette;

public abstract class SubCorsa {
    private String gomme;
    private String freni;
    private boolean daGara;

    public SubCorsa(String gomme, String freni, boolean daGara) {
        this.gomme = gomme;
        this.freni = freni;
        this.daGara = daGara;
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

    public boolean isDaGara() {
        return daGara;
    }

    public void setDaGara(boolean daGara) {
        this.daGara = daGara;
    }

    @Override
    public String toString() {
        return "SubCorsa{" +
                "gomme='" + gomme + '\'' +
                ", freni='" + freni + '\'' +
                ", daGara=" + daGara +
                '}';
    }
}
