#include "logger.h"
#include <string>
#include <iostream>

// ======================= TODOs =======================

void addReading(const std::string& label, double value,
                std::string labels[], double values[],
                int& size, int capacity) {
    // TODO: throw "Full" if size == capacity, else insert and ++size
    if (size == capacity) {
        throw "Full";
    } else {
        labels[size] = label; // Append label to labels
        values[size] = value; // Append value to values
        size++; // Increment size by 1
    }
}

void updateValue(double* valuePtr, double newValue) {
    // TODO: write through pointer
    *valuePtr = newValue;
}

void printReading(const std::string& label, const double& value) {
    // TODO: pretty-print one reading
    std::cout << label << ": " << value << std::endl;
}

double average(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute average
    if (size == 0) {
        throw "Empty";
    } else {
        double sum = 0.0;
        for (int i = 0; i < size; i++) {
            sum += values[i];
        }
        return sum / size;
    }
}

double minValue(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute min
    if (size == 0) {
        throw "Empty";
    } else if (size == 1) {
        return values[0];
    } else {
        double min = values[0];
        double curr;
        for (int i = 1; i < size; i++) {
            curr = values[i];
            if (curr < min) {
                min = curr;
            }
        }
        return min;
    }
}

double maxValue(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute max
    return 0.0;
}
