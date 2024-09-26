from setuptools import find_packages, setup

package_name = 'cv_center'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='kmw',
    maintainer_email='werkm1214@hanyang.ac.kr',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
    'test': ['pytest'],
    },
    entry_points={
        'console_scripts': [
            'center_pub = cv_center.center_pub:main',
            'center_sub = cv_center.center_sub:main',
        ],
    },
)
