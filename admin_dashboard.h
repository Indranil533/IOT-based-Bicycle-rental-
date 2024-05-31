const char *HTML_CONTENT_ADMD = R"=====(
<!DOCTYPE html>
<html>
<head>
    <title>Admin Dashboard - Cycle Rental</title>
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
        #admin-dashboard {
            background: #E9C46A;
            border-radius: 10px;
            padding: 20px;
            width: 80%;
            margin: 0 auto;
            animation: fadeIn 1s ease-in;
            display: flex;
            flex-wrap: wrap;
            justify-content: space-between;
        }
        .cycle-box {
            background: #F4A261;
            border-radius: 10px;
            padding: 15px;
            width: calc(32% - 10px);
            margin: 10px;
            cursor: pointer;
            transition: background-color 0.3s;
        }

        .cycle-box:nth-child(3n) {
            margin-right: 0;
        }

        .cycle-box:nth-child(n+4) {
            margin-top: 20px;
        }

        .welcome-text {
            font-size: 32px;
            font-weight: bold;
            margin-bottom: 20px;
        }

        .cycle-box:hover {
            background: #DC4D01;
        }

        .admin-login {
            background: #E9C46A;
            border-radius: 10px;
            padding: 20px;
            width: 100%;
            animation: fadeIn 1s ease-in;
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
    <div id="admin-dashboard">
        <div class="admin-login">
            <div class="welcome-text">Welcome, User!</div>
        </div>
        <!-- Placeholder for Cycle 1 -->
        <div class="cycle-box">
            <h4>Cycle 1</h4>
            <p>Cycle State: <span style="color: green;">%GYRO_STATE%</span></p>
            <p>Distance: %DISTANCE% </p>
            <a href='/gps.html' >Location</a>
            <p>Other Sensor Data: Value</p>
        </div>

        <!-- Placeholder for Cycle 2 -->
        <div class="cycle-box">
            <h4>Cycle 2</h4>
            <p>GPS Coordinates: (latitude, longitude)</p>
            <p>Current Speed: 15 km/h</p>
            <p>Other Sensor Data: Value</p>
        </div>

        <!-- Placeholder for Cycle 3 -->
        <div class="cycle-box">
            <h4>Cycle 3</h4>
            <p>GPS Coordinates: (latitude, longitude)</p>
            <p>Current Speed: 15 km/h</p>
            <p>Other Sensor Data: Value</p>
        </div>

        <!-- Placeholder for Cycle 4 -->
        <div class="cycle-box">
            <h4>Cycle 4</h4>
            <p>GPS Coordinates: (latitude, longitude)</p>
            <p>Current Speed: 15 km/h</p>
            <p>Other Sensor Data: Value</p>
        </div>
    </div>
    <footer>
        &copy; 2023 Cycle Rental Company
    </footer>
</body>

</html>
)=====";
