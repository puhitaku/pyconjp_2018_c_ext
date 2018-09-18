#include <stdio.h>
#include <string.h>
#include <Python.h>

PyObject* hello(PyObject *self, PyObject *args) {
    if (!PyArg_ParseTuple(args, "")) {
        return NULL;
    }
    return Py_BuildValue("s", "Hello, World!");
}

PyObject* hello_hex(PyObject *self, PyObject *args) {
    unsigned char bin[] = {0xFE, 0xED, 0xCA, 0xFE};
    if (!PyArg_ParseTuple(args, "")) {
        return NULL;
    }
    return Py_BuildValue("s#", bin, sizeof(bin));
}

static PyMethodDef methods[] = {
    {"hello", hello, METH_VARARGS},
    {"hello_hex", hello_hex, METH_VARARGS},
    {NULL},
};

void initlibhelloworld(void) {
    Py_InitModule("libhelloworld", methods);
}

