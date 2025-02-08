import pytest
import functions as f

def test_menu_login(monkeypatch):
    """Test che simula l'inserimento di 'login'."""
    monkeypatch.setattr('builtins.input', lambda _: 'login')  # Simula input 'login'
    assert f.menu() == 'login'

def test_menu_visitatore(monkeypatch):
    """Test che simula l'inserimento di 'visitatore'."""
    monkeypatch.setattr('builtins.input', lambda _: 'visitatore')  # Simula input 'visitatore'
    assert f.menu() == 'visitatore'

def test_menu_esci(monkeypatch):
    """Test che simula l'inserimento di 'esci'."""
    monkeypatch.setattr('builtins.input', lambda _: 'esci')  # Simula input 'esci'
    assert f.menu() == 'esci'

def test_menu_case_insensitive(monkeypatch):
    """Test che verifica la gestione del case insensitive."""
    monkeypatch.setattr('builtins.input', lambda _: 'LOGIN')  # Simula input 'LOGIN'
    assert f.menu() == 'login'  # Dovrebbe comunque restituire 'login'
    
def test_menu_input_non_valido(monkeypatch):
    """Test che verifica la gestione di input non validi."""
    monkeypatch.setattr('builtins.input', lambda _: 'PIPPO')  # Simula input non valido
    assert f.menu() == 'pippo' #Per ora qualsiasi input non valido viene preso.



# TEST CALCOLO NOLEGGIO

# Dati hardcoded
marcheInSede = {"AUDI": 5,"BMW":8,"MERCEDES":10,"TESLA":15}
motor_AUDI = {"BENZINA":7,"DIESEL":9,"IBRIDA":10,"ELETTRICA":13}
motor_BMW = {"BENZINA":7,"DIESEL":9,"ELETTRICA":13}
motor_MERCEDES = {"BENZINA":7,"DIESEL":9,"IBRIDA":10}
motor_TESLA = {"ELETTRICA":13}
costoFissoKm = 50

def test_calcolo_noleggio_base():
    selezioneCliente = ["AUDI", "BENZINA", 200, 3]  # Valori di esempio
    expected_cost = 86  # Calcola il costo aspettato manualmente (5 + 7) * 3 + 50
    assert f.calcoloNoleggio(costoFissoKm, selezioneCliente, marcheInSede, motor_AUDI, motor_BMW, motor_MERCEDES, motor_TESLA) == expected_cost

def test_calcolo_noleggio_km_superiori_300():
    selezioneCliente = ["AUDI", "BENZINA", 350, 3]  # Modifica solo i km
    expected_cost = 48.5 # Calcola il nuovo costo aspettato
    assert f.calcoloNoleggio(costoFissoKm, selezioneCliente, marcheInSede, motor_AUDI, motor_BMW, motor_MERCEDES, motor_TESLA) == expected_cost
    

# Test parametrizzati (esempio - puoi aggiungere altri casi)
@pytest.mark.parametrize("marca, motorizzazione, km, tempo, costo_aspettato", [
    ("BMW", "BENZINA", 200, 3, 95),  # (8 + 7) * 3 + 50
    ("TESLA", "ELETTRICA", 400, 2, 81),  # (15 + 13) * 2 + 50 + (100 * 0.25)
    ("MERCEDES", "DIESEL", 150, 4, 126),  # (10 + 9) * 4 + 50
])
def test_calcolo_noleggio_parametri(marca, motorizzazione, km, tempo, costo_aspettato):
    selezioneCliente = [marca, motorizzazione, km, tempo]
    assert f.calcoloNoleggio(costoFissoKm, selezioneCliente, marcheInSede, motor_AUDI, motor_BMW, motor_MERCEDES, motor_TESLA) == costo_aspettato