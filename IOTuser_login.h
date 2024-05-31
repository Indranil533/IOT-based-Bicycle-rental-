const char *HTML_CONTENT_USERL = R"=====(
<!DOCTYPE html>
<html>
<head>
    <title>User Login - Cycle Rental</title>
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
        #user-login-form {
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
        #admin-link-button {
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
        #admin-link-button:hover {
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

    <div id="user-login-form">
        <h2>User Login</h2>
        <form action="user_dashboard.html" method="post">
            <input type="text" name="username" placeholder="Username" required><br>
            <input type="password" name="password" placeholder="Password" required><br>
            <button onclick="window.location.href='user_dashboard.html'" >Login </button>
        </form>
    </div>
    <!-- Add a button to navigate to the admin login page -->
    <button id="admin-link-button" onclick="window.location.href='admin_login.html'">Admin Login</button>
    <footer>
        &copy; 2023 Cycle Rental Company
    </footer>
</body>
</html>
)=====";
