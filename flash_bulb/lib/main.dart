import 'package:flutter/material.dart';

import 'bulb_screen.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'Flash Bulb',
      theme: ThemeData(
        useMaterial3: true,
      ),
      home: Flash_Bulb(),
    );
  }
}