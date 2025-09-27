# 🌡️ Temp-CO2_Sensor – STM32F411 Environmental Monitor  

Ce projet consiste en un **système embarqué temps réel** utilisant le microcontrôleur **STM32F411** pour surveiller les conditions environnementales et alerter en cas de danger.  

---

## 🛠 Fonctionnalités principales  

### 1. Capteurs et mesures  
- **DHT22** : Température et humidité.  
- **MQ135** : Détection de gaz nocifs (CO₂ et autres polluants).  

### 2. Interface et alertes  
- **LCD 16x2** : Affichage en temps réel des mesures.  
- **Buzzer** : Alerte sonore lorsque les seuils de gaz sont dépassés.  

### 3. Gestion temps réel  
- Utilisation d’un **RTOS** pour exécuter les tâches en parallèle :  
  - Lecture des capteurs.  
  - Mise à jour de l’écran LCD.  
  - Détection et déclenchement de l’alerte.  

---

## ⚙️ Matériel utilisé  

- STM32F411 (carte Nucleo/Discovery).  
- Capteur **DHT22**.  
- Capteur de gaz **MQ135**.  
- Écran **LCD 16x2**.  
- **Buzzer**.  

---

## 🚀 Objectif  

Fournir une solution **fiable, modulaire et efficace** pour la surveillance de l’air, combinant capteurs, affichage et alertes dans un système embarqué optimisé.  

---
The demo vide : https://drive.google.com/file/d/1u7HYucdq7AoHm5PjJSkNpJtD8YXpN2A0/view?usp=drive_link

Report link : https://drive.google.com/file/d/15Qdc9kGLfM-vilsBCdXImr4zCZQ4ah59/view?usp=drive_link

