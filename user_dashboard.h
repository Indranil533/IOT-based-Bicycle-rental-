const char *HTML_CONTENT_USERD = R"=====(
<!DOCTYPE html>
<html>
<head>
    <title>User Dashboard - Cycle Rental</title>
    <style>
        body {
            background: #264553;
            font-family: Arial, sans-serif;
            text-align: center;
            color: white;
        }
        header {
            background: #2A9D8F;
            padding: 10px;
        }
        #user-dashboard {
            background: #E9C46A;
            border-radius: 10px;
            padding: 20px;
            width: 300px;
            margin: 0 auto;
            animation: fadeIn 1s ease-in;
        }
        button {
            background: #2A9D8F;
            color: white;
            border: none;
            cursor: pointer;
        }
        
        @keyframes fadeIn {
            from {
                opacity: 0;
            }
            to {
                opacity: 1;
            }
        }
    </style>
</head>
<body>
    <header>
        <h1>Cycle Rental</h1>
    </header>
    <div id="user-dashboard">
        <h2>Welcome, User!</h2>
        <h3>Statistics:</h3>
        <p>Total Rentals: 10</p>
        <p>Current Rental: None</p>
        <p>Lock State: <span style="color: red;">%LOCK_STATE%</span></p>
        <a href='/user_dashboard.html?state=on'>Unlock</a>
        <br><br>
        <a href='/user_dashboard.html?state=off'>Lock</a>
        <p>Rental History: (Date: 02/11/2023)<br>
  <br>               (Date: 28/10/2023)<br>
  <br>               (Date: 27/10/2023)</p>
        <h3>Payment Gateway:</h3>
        <p>Payment Amount: %CASH%</p>
        <button>Pay Now</button>
    </div>
    <footer>
        &copy; 2023 Cycle Rental Company
    </footer>
</body>
</html>
)=====";
