const char *HTML_CONTENT_GPS = R"=====(
<!DOCTYPE html>
<html>
<head>
    <title>NEO-6M GPS Readings</title>
    <style>
        table, th, td {
            border: 1px solid blue;
        }
    </style>
</head>
<body>
    <h1 style="font-size:300%;" align="center">NEO-6M GPS Readings</h1>
    <p align="center" style="font-size:150%;"><b>Location Details</b></p>
    <table align="center" style="width:50%">
        <tr>
            <th>Latitude</th>
            <td align="center">%LAT%</td>
        </tr>
        <tr>
            <th>Longitude</th>
            <td align="center">%LONG%</td>
        </tr>
        <tr>
            <th>Date</th>
            <td align="center">%DATE%</td>
        </tr>
        <tr>
            <th>Time</th>
            <td align="center">%TIME%</td>
        </tr>
    </table>

    //<!-- Check if GPS location is valid before adding the Google Maps link -->
    <p align="center">
        <a style="color:RED;font-size:125%;" href="http://maps.google.com/maps?&z=15&mrt=yp&t=k&q=%LAT%+%LONG%" target="_top">
            Click here
        </a> to open the location in Google Maps
    </p>
</body>
</html>
)=====";
