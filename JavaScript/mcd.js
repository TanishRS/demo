<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>McDonald's Meal Order</title>

    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #fff8e1;
            padding: 40px;
        }

        .box {
            width: 380px;
            padding: 25px;
            border: 2px solid #ffcc00;
            border-radius: 10px;
            background-color: white;
        }

        h1 {
            color: #d32f2f;
            text-align: center;
        }

        h2 {
            color: #c62828;
        }

        button {
            padding: 8px 20px;
            background-color: #ffcc00;
            border: none;
            cursor: pointer;
            font-weight: bold;
            margin-right: 10px;
        }

        #result {
            margin-top: 20px;
            color: green;
            font-weight: bold;
        }
    </style>
</head>
<body>

<div class="box" id="app"></div>

<script>
    // Create heading
    let app = document.getElementById("app");

    let title = document.createElement("h1");
    title.innerText = "McDonald's";
    app.appendChild(title);

    let subtitle = document.createElement("h2");
    subtitle.innerText = "Select Your Meal Plan";
    app.appendChild(subtitle);

    // Meal options
    let meals = [
        { name: "Burger Meal", price: 199 },
        { name: "Pizza Meal", price: 249 },
        { name: "Family Meal", price: 399 }
    ];

    meals.forEach(function(meal) {
        let radio = document.createElement("input");
        radio.type = "radio";
        radio.name = "meal";
        radio.value = meal.name;
        radio.setAttribute("data-price", meal.price);

        let label = document.createTextNode(" " + meal.name + " – ₹" + meal.price);

        app.appendChild(radio);
        app.appendChild(label);
        app.appendChild(document.createElement("br"));
        app.appendChild(document.createElement("br"));
    });

    // Buttons
    let btn = document.createElement("button");
    btn.innerText = "Place Order";
    btn.onclick = showResult;
    app.appendChild(btn);

    let clearBtn = document.createElement("button");
    clearBtn.innerText = "Clear";
    clearBtn.onclick = function() {
        location.reload();
    };
    app.appendChild(clearBtn);

    // Result area
    let result = document.createElement("div");
    result.id = "result";
    app.appendChild(result);

    // Function
    function showResult() {
        let radios = document.getElementsByName("meal");
        let selectedMeal = "";
        let amount = 0;

        for (let i = 0; i < radios.length; i++) {
            if (radios[i].checked) {
                selectedMeal = radios[i].value;
                amount = radios[i].getAttribute("data-price");
            }
        }

        if (selectedMeal === "") {
            result.innerHTML = "⚠️ Please select a meal plan.";
        } else {
            result.innerHTML =
                "Selected Meal Plan: " + selectedMeal + "<br>" +
                "Total Amount to Pay: ₹" + amount;
        }
    }
</script>

</body>
</html>x