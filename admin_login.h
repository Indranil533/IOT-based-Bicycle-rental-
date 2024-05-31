const char *HTML_CONTENT_ADML = R"=====(
<!DOCTYPE html>
<html>
<head>
    <title>Admin Login - Cycle Rental</title>
    <style>
        body {
            background: #264553;
            font-family: Arial, sans-serif;
            text-align: center;
            color: white;
            position: relative;
            margin: 0;
            height: 100vh;
        }
        header {
            background: #2A9D8F;
            padding: 10px;
        }
        #admin-login-form {
            background: #E9C46A;
            border-radius: 10px;
            padding: 20px;
            width: 300px;
            margin: 0 auto;
            animation: fadeIn 1s ease-in;
        }
        input, button {
            margin: 10px 0;
            padding: 10px;
            width: 100%;
        }
        button {
            background: #2A9D8F;
            color: white;
            border: none;
            cursor: pointer;
            width: 100px; /* Adjust the width as needed */
            transition: background 0.3s; /* Add a transition effect */
        }
        #user-login-button {
            position: fixed;
            bottom: 10px;
            right: 10px;
            background: #2A9D8F;
            color: white;
            border: none;
            padding: 10px;
            border-radius: 5px;
            cursor: pointer;
            transition: background 0.3s; /* Add a transition effect */
        }
        #user-login-button:hover {
            background: #DC4D01; /* Change button color to #DC4D01 on hover */
        }
        footer {
            position: absolute;
            bottom: 0;
            width: 100%;
            background: #264553;
            padding: 10px;
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
    <div id="admin-login-form">
        <h2>Admin Login</h2>
        <form action="admin_dashboard.html" method="post">
            <input type="text" name="admin_username" placeholder="Admin Username" required><br>
            <input type="password" name="admin_password" placeholder="Admin Password" required><br>
            <button onclick="window.location.href='admin_dashboard.html'">Login </button>
        </form>
    </div>
    <!-- Add a button to navigate to the user login page -->
    <button id="user-login-button" onclick="window.location.href='IOTuser_login.html'">User Login</button>
    <footer>
        &copy; 2023 Cycle Rental Company
    </footer>
</body>
</html>
)=====";
