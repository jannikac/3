# Aufgaben 3 - Automatische Zeiger

## Aufgabe 1

### a)

In Zeile 16 wird ein C-Zeiger namens `child` auf eine node mit dem Namen `child` erstellt. Der Zeiger `child` wird in Zeile 17 an den smart Pointer namens `child_ptr` weitergegeben. Hierdurch wird der Quellzeiger geändert und zu einem `nullptr` gesetzt. In Zeile 20 wird der Originale C-Zeiger namens `child` gelöscht und somit wird ein automatisch verwaltetes Objekt gelöscht, was nicht zulässig ist.

### b)

Die Lösung wäre hier den automatischen Zeiger und das zugehörige Objekt in einer einzelnen Anweisung zu initialisieren.
Also: `std::auto_ptr<node> child_ptr(new node("child"));`

## Aufgabe 2

### a)

Bei Referenzzirkeln kann trotzdem ein Speicherleck entstehen. Smart Pointer minimieren jedoch das Risiko deutlich.

### b)

### c)

### d)

### e)
