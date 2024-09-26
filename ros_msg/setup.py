from setuptools import find_packages, setup

package_name = 'ros_msg'

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
            'talker = ros_msg.pub:main',
            'listener = ros_msg.sub:main',
        ],
    },
)
