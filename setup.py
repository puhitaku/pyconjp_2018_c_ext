from setuptools import setup, Extension, find_packages


module = Extension('libhelloworld', sources=['./src/helloworld.c'])

setup(
    name='helloworld',
    version='1.0',
    description='Hello world!',
    author='Takumi Sueda',
    author_email='puhitaku@gmail.com',
    url='https://github.com/puhitaku/pyconjp_2018_c_ext',
    packages=find_packages(),
    ext_modules=[module])

