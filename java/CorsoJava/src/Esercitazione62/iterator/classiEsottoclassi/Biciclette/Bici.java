package Esercitazione62.iterator.classiEsottoclassi.Biciclette;

public class Bici implements IBicicletta{

    private int peso;
    private int marce;
    private boolean luci;

    public Bici(int peso, int marce, boolean luci) {
        this.peso = peso;
        this.marce = marce;
        this.luci = luci;
    }
    @Override
    public int getPeso() {
        return peso;
    }


    public void setPeso(int peso) {
        this.peso = peso;
    }
    @Override
    public int getMarce() {
        return marce;
    }

    public void setMarce(int marce) {
        this.marce = marce;
    }

    public boolean isLuci() {
        return luci;
    }

    public void setLuci(boolean luci) {
        this.luci = luci;
    }

    @Override
    public String toString() {
        return "Bici{" +
                "peso=" + peso +
                ", marce=" + marce +
                ", luci=" + luci +
                '}';
    }
}
