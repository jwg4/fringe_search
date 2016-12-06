import unittest
import ctypes

class TestBranch(unittest.TestCase):
    def setUpClass(cls):
        cls.obj = ctypes.CDLL("obj/fringe_13.o")
        
        def test_object(self):
            self.assertIsNotNone(self.obj)
