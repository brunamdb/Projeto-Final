# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from simple_filter/LaserSimple.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class LaserSimple(genpy.Message):
  _md5sum = "7b8187ec0e932eb25ced46dca14c4680"
  _type = "simple_filter/LaserSimple"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float64 north_laser
float64 south_laser
float64 east_laser
float64 west_laser"""
  __slots__ = ['north_laser','south_laser','east_laser','west_laser']
  _slot_types = ['float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       north_laser,south_laser,east_laser,west_laser

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(LaserSimple, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.north_laser is None:
        self.north_laser = 0.
      if self.south_laser is None:
        self.south_laser = 0.
      if self.east_laser is None:
        self.east_laser = 0.
      if self.west_laser is None:
        self.west_laser = 0.
    else:
      self.north_laser = 0.
      self.south_laser = 0.
      self.east_laser = 0.
      self.west_laser = 0.

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
      buff.write(_get_struct_4d().pack(_x.north_laser, _x.south_laser, _x.east_laser, _x.west_laser))
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
      end += 32
      (_x.north_laser, _x.south_laser, _x.east_laser, _x.west_laser,) = _get_struct_4d().unpack(str[start:end])
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
      buff.write(_get_struct_4d().pack(_x.north_laser, _x.south_laser, _x.east_laser, _x.west_laser))
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
      end += 32
      (_x.north_laser, _x.south_laser, _x.east_laser, _x.west_laser,) = _get_struct_4d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
