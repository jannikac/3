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

Siehe `src/{rc.cpp, rc.hpp, string_shared_ptr.cpp, string_shared_ptr.hpp, string_weak_ptr.cpp, string_weak_ptr.hpp}`.

Die String Implementierung (`string.cpp, string.hpp`) wurde aus der Bearbeitung der Aufgabe 2 übernommen.

### c)

Shared Pointer sollten nur verwendet werden, wenn es ein Objekt gibt, die von mehreren Funktionen gelesen / geändert werden und das Kopieren dieses Objekts aufwendig ist. Wird ein Objekt nur von einer Funktion verwendet, sollte man Unique Pointer verwenden. Da Shared Pointer noch ein weiteres Objekt, das Referenzzählerobjekt, verwalten, entstehen bei exzessiver Verwendung von Shared Pointern Performanceeinbußen.

### d)

### e)
