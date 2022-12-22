# Gebruiksaanwijzing

### opladen / vervangen batterijen
opladen van batterijen onder toezicht houden zodat deze niet overladen worden

### draadloze communicatie
#### verbinding maken
verbinden via smartphone met de app serial bluetooth terminal

#### commando's
debug [on/off]  
start  
stop  
set cycle [..µs]  
set power [0..255]  
set diff [0..1]  
set kp [0..+]  
set ki [0..+]  
set kd [0..+]  
calibrate black  
calibrate white  

### kalibratie
Hierdoor zullen de sensoren de zwarte lijn beter kunnen scheiden van het witte blad waardoor de lijnvolger het circuit nauwkeuriger zal volgen. Deze kalibratie moet op elk circuit opnieuw uitgevoerd worden.  

### settings
De robot rijdt stabiel met volgende parameters:  
set cycle [2000µs]  
set power [120]  
set diff [0.2]  
set kp [7.0]  
set ki [0]  
set kd [1.85] 

### start/stop button
Plaatsing van de start/stop knop in het midden van het breadboard op de lijnvolger. Deze zal ervoor zorgen of de auto aan staat of niet.
