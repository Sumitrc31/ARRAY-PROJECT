import 'dart:io';

double calculateAverage(double total, int subjects) => total / subjects;

void main() {
  print("Enter Student Name:");
  String name = stdin.readLineSync()!;

  print("Enter Number of Subjects:");
  int subjects = int.parse(stdin.readLineSync()!);

  double totalMarks = 0;

  for (int i = 1; i <= subjects; i++) {
    print("Enter marks for Subject $i:");
    double marks = double.parse(stdin.readLineSync()!);
    totalMarks += marks;
  }

  double average = calculateAverage(totalMarks, subjects);

  String result = (average >= 40) ? "Pass" : "Fail";

  print("\n=========== Student Result ===========");
  print("Student Name : $name");
  print("Total Marks  : ${totalMarks.toStringAsFixed(2)}");
  print("Average Marks: ${average.toStringAsFixed(2)}");
  print("Result       : $result");
}
