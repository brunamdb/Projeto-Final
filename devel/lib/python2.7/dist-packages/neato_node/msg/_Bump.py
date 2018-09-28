# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from neato_node/Bump.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Bump(genpy.Message):
  _md5sum = "459d87767ce0f2ebdc162046e9ad2c13"
  _type = "neato_node/Bump"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# This represents the bump sensor data from the Neato 

uint8 leftFront
uint8 leftSide
uint8 rightFront
uint8 rightSide 
"""
  __slots__ = ['leftFront','leftSide','rightFront','rightSide']
  _slot_types = ['uint8','uint8','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       leftFront,leftSide,rightFront,rightSide

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Bump, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.leftFront is None:
        self.leftFront = 0
      if self.leftSide is None:
        self.leftSide = 0
      if self.rightFront is None:
        self.rightFront = 0
      if self.rightSide is None:
        self.rightSide = 0
    else:
      self.leftFront = 0
      self.leftSide = 0
      self.rightFront = 0
      self.rightSide = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_4B().pack(_x.leftFront, _x.leftSide, _x.rightFront, _x.rightSide))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 4
      (_x.leftFront, _x.leftSide, _x.rightFront, _x.rightSide,) = _get_struct_4B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_4B().pack(_x.leftFront, _x.leftSide, _x.rightFront, _x.rightSide))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 4
      (_x.leftFront, _x.leftSide, _x.rightFront, _x.rightSide,) = _get_struct_4B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4B = None
def _get_struct_4B():
    global _struct_4B
    if _struct_4B is None:
        _struct_4B = struct.Struct("<4B")
    return _struct_4B
