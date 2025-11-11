
import 'package:flutter/material.dart';
void main() => runApp(MyResponsiveApp());
class MyResponsiveApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Responsive UI - Orientation',
      home: ResponsiveHomePage(),
    );
  }
}
class ResponsiveHomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    // Get screen orientation
    final isLandscape =
        MediaQuery.of(context).orientation == Orientation.landscape;
    return Scaffold(
      appBar: AppBar(
        title: Text('Responsive UI - Orientation'),
        centerTitle: true,
      ),
      body: isLandscape
          ? Row(
              children: [
                Expanded(
                  child: Container(
                    color: Colors.purple,
                    child: Center(
                      child: Text(
                        'Landscape Mode',
                        style: TextStyle(fontSize: 24, color: Colors.white),
                      ),
                    ),
                  ),
                ),
                Expanded(
                  child: Container(
                    color: Colors.orange,
                    child: Center(
                      child: Text(
                        'Right Panel',
                        style: TextStyle(fontSize: 24, color: Colors.white),
                      ),
                    ),
                  ),
                ),
              ],
            )
          : Column(
              children: [
                Expanded(
                  child: Container(
                    color: Colors.purple,
                    child: Center(
                      child: Text(
                        'Portrait Mode',
                        style: TextStyle(fontSize: 24, color: Colors.white),
                      ),
                    ),
                  ),
                ),
                Expanded(
                  child: Container(
                    color: Colors.orange,
                    child: Center(
                      child: Text(
                        'Bottom Panel',
                        style: TextStyle(fontSize: 24, color: Colors.white),
                      ),
                    ),
                  ),
                ),
              ],
            ),
    );
  }
}
import 'package:flutter/material.dart';
void main() => runApp(MyResponsiveApp());
class MyResponsiveApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Tablet View',
      home: ResponsiveHomePage(),
      debugShowCheckedModeBanner: false,
    );
  }
}
class ResponsiveHomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    final isLandscape =
        MediaQuery.of(context).orientation == Orientation.landscape;
    return Scaffold(
      appBar: AppBar(
        title: Text(
          'Tablet View',
          style: TextStyle(color: Colors.black),
        ),
        backgroundColor: Colors.green,
      ),
      body: isLandscape
          ? Row(
              children: [
                Expanded(
                  child: Container(
                    color: Colors.teal,
                    child: Center(
                      child: Text(
                        'Left Panel',
                        style: TextStyle(fontSize: 24, color: Colors.white),
                      ),
                    ),
                  ),
                ),
                Expanded(
                  child: Container(
                    color: Colors.blueGrey,
                    child: Center(
                      child: Text(
                        'Right Panel',
                        style: TextStyle(fontSize: 24, color: Colors.white),
                      ),
                    ),
                  ),
                ),
              ],
            )
          : Column(
              children: [
                Expanded(
                  child: Container(
                    color: Colors.teal,
                    child: Center(
                      child: Text(
                        'Top Panel',
                        style: TextStyle(fontSize: 24, color: Colors.white),
                      ),
                    ),
                  ),
                ),
                Expanded(
                  child: Container(
                    color: Colors.blueGrey,
                    child: Center(
                      child: Text(
                        'Bottom Panel',
                        style: TextStyle(fontSize: 24, color: Colors.white),
                      ),
                    ),
                  ),
                ),
              ],
            ),
    );
  }
}
