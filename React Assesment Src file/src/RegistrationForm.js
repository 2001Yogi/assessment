import React from 'react';
import useFormValidation from './useFormValidation';
import validateForm from './validateForm';

const RegistrationForm = () => {
  const initialState = {
    username: '',
    email: '',
    password: '',
    retypePassword: '',
    phone: '',
    address: '',
    town: '',
    zipcode: '',
    country: '',
  };

  const { values, errors, handleChange, handleSubmit } = useFormValidation(initialState, validateForm);

  return (
    <div style={{ maxWidth: '500px', margin: '50px auto', padding: '20px', border: '1px solid #ccc', borderRadius: '5px' }}>
      <h2>Registration Form</h2>
      <form onSubmit={handleSubmit}>
        {/* Username */}
        <div>
          <label>Username:</label>
          <input type="text" name="username" value={values.username} onChange={handleChange} />
          {errors.username && <p style={{ color: 'red' }}>{errors.username}</p>}
        </div>

        {/* Email */}
        <div>
          <label>Email:</label>
          <input type="email" name="email" value={values.email} onChange={handleChange} />
          {errors.email && <p style={{ color: 'red' }}>{errors.email}</p>}
        </div>

        {/* Password */}
        <div>
          <label>Password:</label>
          <input type="password" name="password" value={values.password} onChange={handleChange} />
          {errors.password && <p style={{ color: 'red' }}>{errors.password}</p>}
        </div>

        {/* Retype Password */}
        <div>
          <label>Retype Password:</label>
          <input type="password" name="retypePassword" value={values.retypePassword} onChange={handleChange} />
          {errors.retypePassword && <p style={{ color: 'red' }}>{errors.retypePassword}</p>}
        </div>

        {/* Phone Number */}
        <div>
          <label>Phone Number:</label>
          <input type="text" name="phone" value={values.phone} onChange={handleChange} />
          {errors.phone && <p style={{ color: 'red' }}>{errors.phone}</p>}
        </div>

        {/* Address */}
        <div>
          <label>Address:</label>
          <input type="text" name="address" value={values.address} onChange={handleChange} />
          {errors.address && <p style={{ color: 'red' }}>{errors.address}</p>}
        </div>

        {/* Town */}
        <div>
          <label>Town:</label>
          <input type="text" name="town" value={values.town} onChange={handleChange} />
          {errors.town && <p style={{ color: 'red' }}>{errors.town}</p>}
        </div>

        {/* Zipcode */}
        <div>
          <label>Zipcode:</label>
          <input type="text" name="zipcode" value={values.zipcode} onChange={handleChange} />
          {errors.zipcode && <p style={{ color: 'red' }}>{errors.zipcode}</p>}
        </div>

        {/* Country */}
        <div>
          <label>Country:</label>
          <input type="text" name="country" value={values.country} onChange={handleChange} />
          {errors.country && <p style={{ color: 'red' }}>{errors.country}</p>}
        </div>

        {/* Submit Button */}
        <button type="submit" style={{ marginTop: '10px' }}>Register</button>
      </form>
    </div>
  );
};

export default RegistrationForm;
