# 🐍 Actividad Práctica: Condicionales y Lógica Booleana en Python
Aplicando compuertas lógicas en código

CASO 1:
Valores:
X = 0
Y = 0
W = 1

Z = X && Y || W
Z = X and Y or W



CASO 2:
Valores:
X = 0
Y = 0
W = 1

Z = X && (Y || W)
Z = X and (Y or W)


## 📋 Información General

**Tema:** Estructuras condicionales (if, else, elif) y operadores lógicos  
**Lenguaje:** Python 3  
**Duración:** 90 minutos  
**Nivel:** Básico-Intermedio  
**Modalidad:** Individual con opción a discusión en parejas

---

## 🎯 Objetivos de Aprendizaje

Al finalizar esta actividad, serás capaz de:

1. ✅ Escribir estructuras condicionales básicas en Python
2. ✅ Utilizar operadores lógicos (AND, OR, NOT)
3. ✅ Relacionar operadores lógicos con compuertas lógicas digitales
4. ✅ Resolver problemas de toma de decisiones mediante código
5. ✅ Depurar y probar código con diferentes valores de entrada

---

## 🧠 Conexión con Sistemas Digitales

### **¿Sabías que...?**

Los condicionales en programación están directamente relacionados con las **compuertas lógicas** que estudiamos en sistemas digitales:

```
PROGRAMACIÓN          ELECTRÓNICA DIGITAL
─────────────────────────────────────────
if (a && b)      →    Compuerta AND
if (a || b)      →    Compuerta OR
if (!a)          →    Compuerta NOT
if (a ^ b)       →    Compuerta XOR
```

**En esta actividad aplicarás:**
- Lógica booleana (valores True/False = 1/0)
- Operadores de comparación (==, !=, <, >)
- Operadores lógicos (and, or, not)
- Toma de decisiones basada en condiciones

---

## 📝 EJERCICIO 1: Validación Simple

### **Código de ejemplo:**

```python
x = True
y = False

if (x == True):
    alert("x es verdad")

if (!y == True):
    alert("y es falso")
```

### **Instrucciones:**

1. **Traduce el código a Python:**
   - Cambia `alert()` por `print()`
   - Cambia `!y` por `not y`
   - Mantén la lógica

2. **Crea el archivo `ejercicio1.py` y escribe:**

```python
# Ejercicio 1: Validación de variables booleanas
# Tu nombre: _______________
# Fecha: _______________

# Paso 1: Declarar variables
x = True
y = False

# Paso 2: Validar x
if x == True:
    print("x es verdad")

# Paso 3: Validar y (negado)
if not y == True:
    print("y es falso")
```

### **Ejecución:**

```bash
$ python ejercicio1.py
x es verdad
y es falso
```

### **Preguntas de análisis:**

1. ¿Qué pasa si cambias `x = False`? ¿Se ejecuta el primer `if`?
2. ¿Por qué `not y == True` es verdadero si y = False?
3. **Relación con compuertas:** ¿Qué compuerta lógica representa `not y`?

### **Tabla de verdad:**

Completa esta tabla probando diferentes valores:

```
┌───────┬───────┬──────────┬──────────────┐
│   x   │   y   │ x==True  │ not y==True  │
├───────┼───────┼──────────┼──────────────┤
│ True  │ False │          │              │
│ True  │ True  │          │              │
│ False │ False │          │              │
│ False │ True  │          │              │
└───────┴───────┴──────────┴──────────────┘
```

---

## 📝 EJERCICIO 2: Control de Acceso

### **Código de ejemplo:**

```python
estudiante = True
profesor = False
visitante = False

if (estudiante || profesor):
    permitir_entrada()
else if (visitante):
    dar_tour_guiado()
else:
    preguntar_que_carajos()
```

### **Instrucciones:**

1. **Análisis previo:**
   - Identifica cuántas personas pueden entrar
   - ¿Qué pasa si alguien no es ninguna de las tres?

2. **Crea el archivo `ejercicio2.py`:**

```python
# Ejercicio 2: Sistema de control de acceso
# Simula acceso a un edificio universitario

# Paso 1: Definir roles (cambia estos valores para probar)
estudiante = True
profesor = False
visitante = False

# Paso 2: Lógica de control
if estudiante or profesor:
    print("✅ Acceso permitido - Bienvenido")
    print("🚪 Puedes entrar al edificio")
elif visitante:
    print("👋 Bienvenido visitante")
    print("🎫 Se te asignará un guía para el tour")
else:
    print("⛔ Acceso denegado")
    print("❓ Por favor identifícate en recepción")

# Paso 3: Mostrar información del usuario
print("\n--- Estado del usuario ---")
print(f"Estudiante: {estudiante}")
print(f"Profesor: {profesor}")
print(f"Visitante: {visitante}")
```

### **Casos de prueba:**

Ejecuta el programa con estos valores y anota el resultado:

```python
# CASO 1
estudiante = True
profesor = False
visitante = False
# Resultado esperado: _______________________

# CASO 2
estudiante = False
profesor = True
visitante = False
# Resultado esperado: _______________________

# CASO 3
estudiante = False
profesor = False
visitante = True
# Resultado esperado: _______________________

# CASO 4
estudiante = False
profesor = False
visitante = False
# Resultado esperado: _______________________

# CASO 5 (interesante)
estudiante = True
profesor = True
visitante = False
# Resultado esperado: _______________________
```

### **Preguntas de análisis:**

1. ¿Qué operador lógico se usa en la primera condición?
2. ¿Qué compuerta lógica representa `estudiante or profesor`?
3. Si una persona es estudiante Y profesor, ¿qué mensaje aparece?
4. Dibuja el circuito lógico equivalente usando compuertas OR y AND

---

## 📝 EJERCICIO 3: Sistema de Encendido de Auto

### **Código de ejemplo:**

```python
gasolina = 10
temperatura = 10

min_gasolina = 5
max_temperatura = 45

if (gasolina > min_gasolina && temperatura < max_temperatura):
    automovil.movimiento = True
else:
    automovil.movimiento = False
```

### **Instrucciones:**

1. **Crea el archivo `ejercicio3.py`:**

```python
# Ejercicio 3: Sistema de seguridad para encendido de automóvil
# Simula las condiciones para que un auto pueda moverse

# Paso 1: Definir estado actual del vehículo
gasolina = 10          # Litros en el tanque
temperatura = 10       # Grados Celsius del motor

# Paso 2: Definir límites de seguridad
min_gasolina = 5       # Mínimo de gasolina requerido
max_temperatura = 45   # Temperatura máxima segura

# Paso 3: Verificar condiciones
print("=== SISTEMA DE DIAGNÓSTICO DEL VEHÍCULO ===")
print(f"🔋 Gasolina actual: {gasolina} litros")
print(f"🌡️  Temperatura motor: {temperatura}°C")
print(f"\n--- Límites de seguridad ---")
print(f"⛽ Mínimo de gasolina: {min_gasolina} litros")
print(f"🔥 Temperatura máxima: {max_temperatura}°C")

# Paso 4: Evaluar con operador AND
if gasolina > min_gasolina and temperatura < max_temperatura:
    movimiento = True
    print("\n✅ VEHÍCULO LISTO PARA MOVERSE")
    print("🚗 Todas las condiciones de seguridad cumplidas")
else:
    movimiento = False
    print("\n⛔ VEHÍCULO NO PUEDE MOVERSE")
    
    # Diagnóstico específico
    if gasolina <= min_gasolina:
        print("⚠️  Nivel de gasolina insuficiente")
    if temperatura >= max_temperatura:
        print("⚠️  Temperatura del motor muy alta")

# Paso 5: Estado final
print(f"\n🔧 Estado de movimiento: {movimiento}")
```

### **Casos de prueba:**

Modifica los valores y completa la tabla:

```
┌──────────┬──────────────┬───────────┬─────────────┐
│ Gasolina │ Temperatura  │ ¿Mueve?   │ Razón       │
├──────────┼──────────────┼───────────┼─────────────┤
│    10    │      10      │           │             │
│    3     │      10      │           │             │
│    10    │      50      │           │             │
│    3     │      50      │           │             │
│    5     │      45      │           │             │
└──────────┴──────────────┴───────────┴─────────────┘
```

### **Preguntas de análisis:**

1. ¿Qué operador lógico se utiliza? (AND / OR)
2. ¿Qué pasa si UNA condición es falsa?
3. **Compuerta equivalente:** Dibuja una compuerta AND con dos entradas
4. **Mejora el código:** Agrega un límite mínimo de temperatura (ej: -10°C)

---

## 📝 EJERCICIO 4: Sistema de Recompensas

### **Código de ejemplo:**

```python
helado = True
dulce = False

if (helado ^ dulce):
    dar_recompensa(helado, dulce)
else:
    dar_recompensa(False, False)
```

### **Instrucciones:**

1. **Nota importante:** El operador `^` es XOR (OR exclusivo)

2. **Crea el archivo `ejercicio4.py`:**

```python
# Ejercicio 4: Sistema de recompensas con XOR
# Un niño puede recibir helado O dulce, pero NO ambos

# Paso 1: Definir opciones de recompensa
helado = True
dulce = False

# Paso 2: Función para dar recompensa
def dar_recompensa(tiene_helado, tiene_dulce):
    """Muestra qué recompensa recibe el niño"""
    if tiene_helado and not tiene_dulce:
        print("🍦 Recompensa: HELADO")
    elif tiene_dulce and not tiene_helado:
        print("🍬 Recompensa: DULCE")
    elif tiene_helado and tiene_dulce:
        print("❌ ERROR: No puedes tener ambos")
    else:
        print("😢 Sin recompensa")

# Paso 3: Evaluar con XOR
# XOR es verdadero si SOLO UNA de las opciones es verdadera
print("=== SISTEMA DE RECOMPENSAS ===")
print(f"Helado solicitado: {helado}")
print(f"Dulce solicitado: {dulce}")
print()

# Verificar XOR manualmente (Python no tiene operador XOR nativo para bool)
# XOR: True si solo una es True
es_xor = (helado or dulce) and not (helado and dulce)

if es_xor:
    print("✅ Recompensa válida (solo una opción elegida)")
    dar_recompensa(helado, dulce)
else:
    print("⚠️  Configuración inválida")
    dar_recompensa(False, False)
```

### **Tabla de verdad XOR:**

Completa ejecutando el programa con diferentes valores:

```
┌────────┬────────┬─────────────┬─────────────────┐
│ helado │ dulce  │ XOR Result  │ Recompensa      │
├────────┼────────┼─────────────┼─────────────────┤
│  True  │ False  │             │                 │
│  False │ True   │             │                 │
│  True  │ True   │             │                 │
│  False │ False  │             │                 │
└────────┴────────┴─────────────┴─────────────────┘
```

### **Preguntas de análisis:**

1. ¿Cuándo es verdadero XOR?
2. ¿En qué se diferencia XOR de OR normal?
3. **Implementación alternativa:** Escribe XOR usando solo AND, OR y NOT
4. **Aplicación real:** ¿Dónde se usa XOR en sistemas digitales? (pista: detectar cambios)

---

## 📝 EJERCICIO 5: Condicionales Anidados (Clima)

### **Código de ejemplo:**

```python
lluvia = True
sombrilla = True
bajo_techo = True

if (lluvia):
    if (sombrilla ^ bajo_techo):
        alert("Estás haciendo lo correcto")
    else:
        alert("¿Dónde te equivocaste?")
else:
    alert("No necesitas sombrilla")
```

### **Instrucciones:**

1. **Crea el archivo `ejercicio5.py`:**

```python
# Ejercicio 5: Sistema de decisión sobre protección contra lluvia
# Lógica anidada con múltiples niveles

# Paso 1: Definir condiciones climáticas y de protección
lluvia = True
sombrilla = True
bajo_techo = True

# Paso 2: Mostrar estado inicial
print("=== SISTEMA DE PROTECCIÓN CONTRA LLUVIA ===")
print(f"☔ ¿Está lloviendo? {lluvia}")
print(f"🌂 ¿Tienes sombrilla? {sombrilla}")
print(f"🏠 ¿Estás bajo techo? {bajo_techo}")
print()

# Paso 3: Lógica de decisión anidada
if lluvia:
    print("🌧️  ESTÁ LLOVIENDO - Evaluar protección...")
    
    # XOR: Debes tener UNA protección, no ambas ni ninguna
    tiene_proteccion_correcta = (sombrilla or bajo_techo) and not (sombrilla and bajo_techo)
    
    if tiene_proteccion_correcta:
        print("✅ Estás haciendo lo correcto")
        
        if sombrilla and not bajo_techo:
            print("   → Estás afuera con sombrilla")
        elif bajo_techo and not sombrilla:
            print("   → Estás resguardado bajo techo")
    else:
        print("⚠️  ¿Dónde te equivocaste?")
        
        if sombrilla and bajo_techo:
            print("   → No necesitas sombrilla si estás bajo techo")
            print("   → Guarda la sombrilla")
        elif not sombrilla and not bajo_techo:
            print("   → ¡Te estás mojando!")
            print("   → Busca sombrilla o refugio")
else:
    print("☀️  NO ESTÁ LLOVIENDO")
    print("ℹ️  No necesitas sombrilla ni preocuparte por refugio")

# Paso 4: Resumen de decisión
print("\n--- DIAGNÓSTICO FINAL ---")
if lluvia and (sombrilla or bajo_techo) and not (sombrilla and bajo_techo):
    print("Estado: PROTEGIDO ADECUADAMENTE ✅")
elif lluvia:
    print("Estado: PROTECCIÓN INCORRECTA ⚠️")
else:
    print("Estado: SIN LLUVIA - SIN PROBLEMAS ☀️")
```

### **Casos de prueba:**

Ejecuta con estas configuraciones y anota el resultado:

```python
# CASO 1: Lluvia, con sombrilla, en exterior
lluvia = True
sombrilla = True
bajo_techo = False
# Resultado: ___________________________

# CASO 2: Lluvia, sin sombrilla, bajo techo
lluvia = True
sombrilla = False
bajo_techo = True
# Resultado: ___________________________

# CASO 3: Lluvia, con sombrilla, bajo techo (redundante)
lluvia = True
sombrilla = True
bajo_techo = True
# Resultado: ___________________________

# CASO 4: Lluvia, sin protección
lluvia = True
sombrilla = False
bajo_techo = False
# Resultado: ___________________________

# CASO 5: Sin lluvia
lluvia = False
sombrilla = True
bajo_techo = False
# Resultado: ___________________________
```

### **Preguntas de análisis:**

1. ¿Cuántos niveles de `if` anidados tiene el código?
2. ¿Por qué usar XOR para evaluar `sombrilla` y `bajo_techo`?
3. Dibuja un diagrama de flujo del proceso de decisión
4. **Reto:** Agrega una variable `impermeable` como tercera opción de protección

---

## 🎯 PARTE FINAL: Integración con Compuertas Lógicas

### **Actividad de síntesis:**

Para cada ejercicio, completa la siguiente tabla:

```
┌────────────┬───────────────────┬──────────────────┬─────────────────┐
│ Ejercicio  │ Operador Usado    │ Compuerta        │ Símbolo         │
│            │ (and/or/not/xor)  │ Equivalente      │ Lógico          │
├────────────┼───────────────────┼──────────────────┼─────────────────┤
│     1      │                   │                  │                 │
│     2      │                   │                  │                 │
│     3      │                   │                  │                 │
│     4      │                   │                  │                 │
│     5      │                   │                  │                 │
└────────────┴───────────────────┴──────────────────┴─────────────────┘
```

### **Dibuja los circuitos:**

Para los ejercicios 2, 3 y 4, dibuja el circuito lógico equivalente usando compuertas.

**Ejemplo para Ejercicio 3:**

```
gasolina > min ────┐
                   ├──[ AND ]──── movimiento
temperatura < max ─┘
```

---

## 📊 Rúbrica de Evaluación

### **Criterios de evaluación (100 puntos):**

| Criterio | Excelente (20) | Bueno (15) | Regular (10) | Insuficiente (5) |
|----------|----------------|------------|--------------|------------------|
| **Ejecución de código** | Todos los 5 ejercicios funcionan sin errores | 4 ejercicios funcionan | 3 ejercicios funcionan | Menos de 3 funcionan |
| **Casos de prueba** | Completa todas las tablas con valores correctos | Completa 80% de tablas | Completa 60% de tablas | Menos del 60% |
| **Análisis y respuestas** | Responde todas las preguntas con profundidad | Responde todas superficialmente | Responde parcialmente | No responde o incorrecto |
| **Relación con compuertas** | Identifica y dibuja todos los circuitos correctamente | Identifica pero dibuja parcialmente | Solo identifica sin dibujar | No relaciona con compuertas |
| **Formato y documentación** | Código comentado, organizado, con salidas claras | Código organizado, pocos comentarios | Código funciona pero desorganizado | Código difícil de leer |

### **Bonificaciones (+10 puntos cada una):**

- ✨ **+10:** Crear un ejercicio adicional original con condicionales
- ✨ **+10:** Implementar versión con entrada del usuario (`input()`)
- ✨ **+10:** Crear diagrama de flujo para todos los ejercicios
- ✨ **+10:** Video explicativo (2-3 min) de uno de los ejercicios

---

## 📤 Entregables

### **Archivo ZIP con:**

1. ✅ `ejercicio1.py` - Validación simple
2. ✅ `ejercicio2.py` - Control de acceso
3. ✅ `ejercicio3.py` - Sistema de auto
4. ✅ `ejercicio4.py` - Recompensas XOR
5. ✅ `ejercicio5.py` - Condicionales anidados
6. ✅ `respuestas.pdf` - Documento con:
   - Tablas de casos de prueba completadas
   - Respuestas a preguntas de análisis
   - Diagramas de circuitos lógicos
   - Capturas de pantalla de ejecuciones
   - Tabla de integración con compuertas

### **Formato del documento:**

- Portada con nombre, matrícula, fecha
- Índice
- Una sección por ejercicio
- Conclusiones personales
- Fuente: Arial 11, interlineado 1.5

---

## 💡 Consejos y Estrategias

### **Para escribir el código:**

1. **Lee el pseudocódigo completo** antes de empezar
2. **Traduce línea por línea:**
   - `alert()` → `print()`
   - `==` → igual en Python
   - `&&` → `and`
   - `||` → `or`
   - `!` → `not`
3. **Prueba cada condicional** individualmente
4. **Usa f-strings** para mensajes claros: `print(f"Valor: {variable}")`

### **Para depurar:**

```python
# Agrega prints de debug
print(f"DEBUG: x={x}, y={y}")
print(f"DEBUG: Condición: {x and y}")
```

### **Para probar:**

- Crea una función `probar_casos()` que ejecute todos los escenarios
- Usa comentarios para documentar cada caso
- Anota resultados esperados vs obtenidos

---

## 🔗 Recursos Adicionales

### **Documentación:**

- [Python Docs - Control Flow](https://docs.python.org/3/tutorial/controlflow.html)
- [Real Python - Conditional Statements](https://realpython.com/python-conditional-statements/)
- [W3Schools - Python If...Else](https://www.w3schools.com/python/python_conditions.asp)

### **Herramientas online:**

- [Python Tutor](http://pythontutor.com) - Visualiza ejecución paso a paso
- [Repl.it](https://replit.com) - IDE online para Python
- [Logic.ly](https://logic.ly) - Simulador de compuertas lógicas

### **Videos recomendados:**

- "Python If Statements" - Corey Schafer
- "Boolean Logic" - Computerphile
- "Logic Gates" - Khan Academy

---

## ⏰ Cronograma Sugerido (90 minutos)

```
Minutos 0-10:   Lectura de instrucciones y setup
Minutos 10-25:  Ejercicio 1 + análisis
Minutos 25-40:  Ejercicio 2 + análisis
Minutos 40-55:  Ejercicio 3 + análisis
Minutos 55-70:  Ejercicio 4 + análisis
Minutos 70-85:  Ejercicio 5 + análisis
Minutos 85-90:  Revisión final y documentación
```

---

## ❓ Preguntas Frecuentes

**P: ¿Puedo usar IDE como PyCharm o VSCode?**  
R: ¡Sí! Cualquier editor funciona. Recomendados: VSCode, PyCharm, IDLE.

**P: ¿Qué versión de Python debo usar?**  
R: Python 3.8 o superior. Verifica con `python --version`

**P: No entiendo XOR, ¿es necesario?**  
R: XOR es importante. Significa "uno u otro, pero no ambos". Practica con la tabla de verdad.

**P: ¿Puedo cambiar los mensajes de print()?**  
R: Sí, personaliza los mensajes manteniendo la lógica intacta.

**P: ¿Cómo relaciono esto con compuertas?**  
R: Cada `and` es una compuerta AND, cada `or` es OR, etc. Los True/False son como voltajes 5V/0V.

---

## 🏆 Criterios de Excelencia

Para obtener calificación sobresaliente:

1. ✨ Código limpio y bien comentado
2. ✨ Casos de prueba exhaustivos
3. ✨ Análisis profundo de cada ejercicio
4. ✨ Diagramas de circuitos claros y precisos
5. ✨ Conexión explícita entre código y compuertas
6. ✨ Creatividad en mensajes y presentación
7. ✨ Bonificaciones completadas

---

## ✅ Checklist Final

Antes de entregar, verifica:

- [ ] Los 5 archivos .py ejecutan sin errores
- [ ] Todas las tablas de casos de prueba completadas
- [ ] Todas las preguntas de análisis respondidas
- [ ] Diagramas de circuitos dibujados
- [ ] Tabla de integración con compuertas completada
- [ ] Documento PDF con formato correcto
- [ ] Capturas de pantalla incluidas
- [ ] Código comentado y legible
- [ ] Nombre en todos los archivos
- [ ] Archivo ZIP nombrado correctamente: `Apellido_Nombre_Condicionales.zip`

---

**¡Buena suerte! Recuerda: estás aprendiendo los fundamentos que unen la programación con la electrónica digital. Cada `if` que escribes es una decisión lógica, igual que en un circuito real.** 🚀

**Fecha de entrega:** [A definir]  
**Plataforma:** [Definir]  
**Valor:** 100 puntos + hasta 40 de bonificación