document.addEventListener("DOMContentLoaded", () => {
    const registroNumero = document.getElementById("registroNumero");
    const numeroInput = document.getElementById("numero");
    const resultadoDiv = document.getElementById("resultado");

    registroNumero.addEventListener("submit", (e) => {
        e.preventDefault();
        const numero = numeroInput.value.trim();

        if (numero) {
            const horas = parseInt(numero, 10);
            const resultado = horas / 25;

            // Redondeo según la lógica especificada
            let resultadoFinal;
            if (resultado - Math.floor(resultado) <= 0.2) {
                resultadoFinal = Math.floor(resultado); // Redondear hacia abajo
            } else {
                resultadoFinal = Math.ceil(resultado); // Redondear hacia arriba
            }

            // Mostrar el resultado con "ECTS"
            resultadoDiv.textContent = `Resultado: ${resultadoFinal} ECTS`;
        } else {
            alert("El campo no puede estar vacío.");
        }
    });
});
