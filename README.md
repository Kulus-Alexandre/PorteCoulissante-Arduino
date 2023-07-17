# Porte Coulissante en Arduino 🚪
maquette prototype d'une porte coulissante que l'on retrouve dans divers commerces en France.

<a href="https://imgur.com/OWiLYUQ"><img src="https://i.imgur.com/OWiLYUQ.jpg" title="source: imgur.com" /></a>
## Technologies utilisées
![C](https://camo.githubusercontent.com/85dd8c38ef3fd94472ab991bed05066671c0bd12129002379f11d3ca352f9956/68747470733a2f2f696d672e736869656c64732e696f2f7374617469632f76313f7374796c653d666f722d7468652d6261646765266d6573736167653d4326636f6c6f723d323232323232266c6f676f3d43266c6f676f436f6c6f723d413842394343266c6162656c3d) ![Arduino](https://camo.githubusercontent.com/f7ffc36eaeea46ca44c7a8d9ecf6c378b7ff6ff102c6ea724cf2e1ae5d04aee8/68747470733a2f2f696d672e736869656c64732e696f2f7374617469632f76313f7374796c653d666f722d7468652d6261646765266d6573736167653d41726475696e6f26636f6c6f723d303039373944266c6f676f3d41726475696e6f266c6f676f436f6c6f723d464646464646266c6162656c3d)
## Fonctionnement Global
Lorsque l'interrupteur à bascule est actionné;
le motoréducteur se met en route pour coulisser la porte.
Un interrupteur de fin de course signale a l'arduino l'arrêt du mouvement. 

puis en changeant la position de l'interrupteur à bascule
la porte revient à son emplacement d'origine et peut recommencer son cycle.

## Composants électroniques utilisé 

#### Composants de traitement
- Carte Arduino Uno 

#### Capteurs et actionneurs
- x2 Interrupteurs de Fin de Course
- Interrupteur à bascule rectangulaire
- Motoréducteur DC 3V-6V

#### Accesoires et Composants d'alimentation
- 2 piles 9V
- 2 connecteur de piles 9V (dont 1 vers arduino)
- shield borniers à vis
- L298N Module de Pont Pas à Pas Double Pont en H
## plus de photo

<a href="https://imgur.com/w95SkMe"><img src="https://i.imgur.com/w95SkMe.jpg" title="source: imgur.com" /></a>

Photo prise lors des réglages : 
<a href="https://imgur.com/xNndpl6"><img src="https://i.imgur.com/xNndpl6.jpg" title="source: imgur.com" /></a>
## Auteur

- [Kulus-Alexandre](https://github.com/Kulus-Alexandre)

